
// if-else statement :

if(a>b || c>d){  // if a is greater the b or c is greater then d then hi will be print else no will print
cout<<"hi";
}
else{
cout<<"no";
}

if(a>=b && c>=e){}  // will be executed only when both are true 
else if(a<b){}   // if if() if not executed then else if will be tested

// dynamic declaration:basically limiting the scope of a variable

int main(){
int a=5;
{
int c=6;  // c is availabe only inside this bracket
}
cout<<a;  // will print 5
cout<<b;  // will give error because we cant access c ,Gives an error saying identifier is undefined.

// switch statment:
switch(day){
case 1:          // if value of day is 1 then monday will be printed
cout<<"monday";
break;
case 2:
cout<<"tues";
break;
default:       // if 1 and 2 are not input then dafault condiotn will be printed
cout<<"error";
break;
}
  
