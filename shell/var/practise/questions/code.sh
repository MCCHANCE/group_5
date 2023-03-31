#TODO

#Turn the thought process in the file called thought_process to a shell script code.

# Hello World Program in Bash Shell

read -p "What is your name: " name

read -p "What is your cohort: " cohort

if [ $cohort -gt 14 ]
then
echo "Error, You cannot be in cohort $cohort because we dont have that cohort yet"
else
read -p "What is your score: " score

if [ $score -gt 170 ]
then
echo "Error, Your score can not be up to $score."
else 
echo "Hello, your name is $name, your cohort is $cohort, and your score is $score"
fi
fi

