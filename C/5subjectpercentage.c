#include<stdio.h>
int main()
{
    float x=92;// maths marks
    /* vairable name can be m1 but not 1m because variable name cannot be started with the digits
    _ (underscore)also can be used before the name of the variables */
    float y=90;//chemistry marks
    float z=95;//physics marks
    float a=89;//english marks
    float b=93;//computer marks
    float v=(x+y+a+b+z)/5;
    /* // comments computer will not read this words*/
    printf("percentage of 5 subjects:%f",v);
    return 0;
    /*// !@#$%^&*(){}:";'<>,+=-.? " this special symbols are not use in the variable space are also not used*/
} 

/*names of variable which are not used 
Auto
double
int
break
extern
enum
unsigned
while
case
sizeof
for
const
static
long
continue
float
else
signed
do
short
switch
char
volatile
default
goto
struct
if
union
return
void
register
typeof
*/