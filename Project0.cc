char * str = "char * str = %c%s%c;%c%c#include <iostream>%c%cint main() {%cprintf(str,34,str,34,10,10,10,10,10,10,10,10);%creturn 0;%c}%c";

#include <iostream>
 
int main() {
printf(str,34,str,34,10,10,10,10,10,10,10,10);
return 0;
}
