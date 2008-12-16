#!/bin/sh

CVSROOT=/home/srv/cvs/irssi-xmpp

cvsplot -cvsdir ${CVSROOT} -rlog irssi-xmpp -linedata .linedata.txt -filedata .filedata.txt -gnuplotlinedata .cvs_lines.png -gnuplotfiledata .cvs_files.png -gnuplotlinefiledata cvs_stats.png
rm -f .linedata.txt .filedata.txt .cvs_lines.png .cvs_files.png
