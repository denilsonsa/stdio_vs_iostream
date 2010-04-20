#!/usr/bin/awk -f

BEGIN{
	for( i=0; i<100000000; i++ )
		print rand()
}
