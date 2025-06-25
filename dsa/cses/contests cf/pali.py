# given string
given_string = "tmkoc"
reverse_string =""
for i in given_string:
    reverse_string = i + reverse_string
    print(reverse_string)
# if given_string matches the reverse_srting exactly
# the given string is a palindrome
if(given_string == reverse_string):
    print("The string", given_string,"is a Palindrome.")
# else the given string is not a palindrome
else:
    print("The string",given_string,"is NOT a Palindrome.")