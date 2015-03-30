#!/bin/bash
#tested it under Fedora Linux 10 and Bash shell.
# show progress dots
function progress()
{  

echo -n "Please wait..."
while true
do
     echo -n "."
     sleep 5
done
}

function dobackup(){
    # put backup commands here
    tar -zcvf /dev/st0 /home &>/dev/null
}

# Start it in the background
progress &

# Save PID
MYSELF=$!

# Start backup
dobackup

# Kill progress
kill $MYSELF &>/dev/null

echo -n "...done."
echo
