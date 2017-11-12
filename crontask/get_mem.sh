#!/bin/bash

export PATH=/usr/local/rrdtool/bin/rrdtool:/usr/local/rrdtool/bin/rrdtool:/home/parallels/bin:/home/parallels/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:$PATH


RRDTOOL='/usr/local/rrdtool/bin/rrdtool'
FILE='test.rrd'
COMMAND=`cat /proc/meminfo | grep MemFree | grep -oE '[0-9]+' | awk '{print $1}'`
$RRDTOOL update $FILE N:$COMMAND
echo $COMMAND >> log.txt

