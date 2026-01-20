# As a fun exercise, add to your .bashrc script in your home directory a 
# small script to 'welcome you' when you turn your shell on.
#
# Note: The first time you create a script file (e.g. login.sh) you will
#       need to give that file executable permission so you can run it
#       as follows.
#
#       chmod +x login.sh
#       
#       This allows me to now have an executable script
#       ./login.sh
#
#       Use 'ls -l' to observe the 'executable' bits have changed.
#
#
#!/bin/sh

echo "Hello" $LOGNAME
echo "Ready to have an awesome coding session?"
