# 64 chars * 64 times = 4K chars per line
# 2^22 = 4194304 = 4M lines

EXTRACFLAGS = -DMAXLINES=4194304 -DA='"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"' -DPRINTSTRING="A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A "

EXTRAPROGS = puts

include ../Makefile.common
