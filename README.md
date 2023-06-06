# json-resume-preprocessing-example
Create multiple Resumes from your single resume.json file using C Pre Processor directives.

To create the acutal jsonresume.org JSON file, you need to run something like this in a Linux
or Mac environment:

 cat resume.cpp | cpp -E | sed '/^#/d' | sed '/^$/d' > resume.json
 resume serve --theme paper-plus-plus

This will run the GNU C Pre Processor so that conditionals/macros can be parsed, comments like
this removed, and a correct JSON file created. The SEDs remove cpp preprocessing directive lines
and blank lines to create a correct JSON file.  It is then served up using the resume-cli command 
and can be accessed from a browser per the normal jsonresume.org methods.

John D. Allen
Parker, TX, USA
June, 2023
