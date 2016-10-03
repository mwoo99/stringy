#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int mystrlen ( char *a){
  int ans = 0;
  while (*a){
    ans++;
    a++;
  }
  return ans;
}

char * mystrcpy( char *dest, char *source ){
  int i;
  for (i = 0;i < mystrlen(source); i++){
    dest[i] = source[i];
  }
  //dest[++i] = *"\0";
  return dest;
}

char *mystrncat(char *dest, const char *src, size_t n){
  int destlen = strlen(dest);
  int i;
  for (i = 0; i < n && i < strlen(src); i++) 
    dest[destlen+i] = src[i];
  return dest;
}

int mystrcmp( char *s1, char *s2 ){
  while ( *s1){
    if (*s1 < *s2)
      return -1;
    if (*s1 > *s2)
      return 1;
    s1++;
    s2++;
  }
  if (strlen(s2)>strlen(s1)) return 1;
  return 0;
}
     

char * mystrchr( char *s, char c ){
  while(*s){
   if (*s == c)
      return s;
    s++;
  }
  return "";
}


int main(){
  //testing mystrlen
  char testStrLen[265] = "small chinese monk";
  printf("mystrlen test of [%s]: %d\n\n", testStrLen, mystrlen(testStrLen));
  
  //testing mystrcpy
  char testStrCpy1[265] = "";
  char testStrCpy2[265] = "faints while";
  printf("mystrcpy test: dest = [%s]\n", testStrCpy1);
  printf("mystrcpy test: source = [%s]\n", testStrCpy2);
  mystrcpy(testStrCpy1, testStrCpy2);
  printf("mystrcpy test: dest = [%s]\n\n", testStrCpy1);
  

  //testing mystrncat
  char testStrnCat1[265] = "attempting ";
  char testStrnCat2[265] = "the longesttttt";
  printf("mystrncat test: dest = [%s]\n", testStrnCat1);
  printf("mystrncat test: source= [%s]\n", testStrnCat2);
  mystrncat(testStrnCat1, testStrnCat2, 11);
  printf("mystrncat test: dest = [%s]\n\n", testStrnCat1);

  //testing mystrcmp
  char testStrCmp1[265] = "YEBOII";
  char testStrCmp2[265] = "YEBOIIIII";
  printf("mystrcmp test: str1 = [%s]\n", testStrCmp1);
  printf("mystrcmp test: str2= [%s]\n", testStrCmp2);
  printf("mystrcmp result = %d\n\n", mystrcmp(testStrCmp1,testStrCmp2));

  //testing mystrchr
  char testStrChr[265] = "BOIIIII";
  char p[265] = "I";
  printf("mystrchr test: string = [%s]\n", testStrChr);
  printf("mystrchr test: char= [%s]\n", p);
  printf("mystrchr result = %s\n\n", mystrchr(testStrChr,*p));

	
  return 0;
}
