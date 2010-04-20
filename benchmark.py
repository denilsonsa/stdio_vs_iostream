#!/usr/bin/env python
# -*- coding: utf-8 -*-
# vi:ts=4 sw=4 et

import re
import sys
from subprocess import Popen, PIPE


re_time_output = re.compile(r'''
    \s*real\s*(?P<real>[0-9m.s]+)
    \s*user\s*(?P<user>[0-9m.s]+)
    \s*sys\s*(?P<sys>[0-9m.s]+)
''', re.M | re.X)


def run_program(progname):
    null = file('/dev/null')
    p = Popen(
        'time ./%s' % (progname,),
        shell=True,  # "time" is a bash built-in command
        executable='/bin/bash',
        stdin=None,
        stdout=null,
        stderr=PIPE,
    )
    stdout, stderr = p.communicate()
    match = re_time_output.match(stderr)
    # TODO: (?) convert from string to integer/float/something else
    return match.groupdict()


def print_program_times(times):
    max_len = max(len(progname) for progname in times.keys())
    header = ['', { 'real': 'real', 'user':'user', 'sys':'sys' }]

    for progname, t in [header] + sorted(times.items()):
        print "{progname:<{len}}  {real:>10}  {user:>10}  {sys:>10}".format(progname=progname, len=max_len, **t)


def main(progs):
    times = {}
    # TODO: (?) Allow running and printing output in the same order as received
    for p in sorted(progs):
        sys.stderr.write('Running %s...\n' % (p,))
        times[p] = run_program(p)

    print_program_times(times)


if __name__ == '__main__':
    main(sys.argv[1:])
