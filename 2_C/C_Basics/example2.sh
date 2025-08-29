# Lines that start with a 'hashmark' or 'pound sign'
# are comments that are ignored.
# You should use them liberally!
# This script runs on the ccis servers.
# This line is special and tells us we have an executable script.
#!/bin/bash
# Output hello and two items read in as command-line arguments
echo "Hello $1 $2"
echo "What is your age?"
# Read in a value
read $myage
echo "That is great you are $myage years old!"
