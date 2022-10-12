w3resource

home
Front End
HTML
CSS
JavaScript
HTML5
Schema.org
php.js
Twitter Bootstrap
Responsive Web Design tutorial
Zurb Foundation 3 tutorials
Pure CSS
HTML5 Canvas
JavaScript Course
Icon
Angular
Vue
Jest
Mocha
NPM
Yarn
Back End
PHP
Python
Java
Node.js
Ruby
C programming
PHP Composer
Laravel
PHPUnit
Database
SQL(2003 standard of ANSI)
MySQL
PostgreSQL
SQLite
NoSQL
MongoDB
Oracle
Redis
Apollo GraphQL
API
Google Plus API
Youtube API
Google Maps API
Flickr API
Last.fm API
Twitter REST API
Data Interchnage
XML
JSON
Ajax
Exercises
HTML CSS Exercises
JavaScript Exercises
jQuery Exercises
jQuery-UI Exercises
CoffeeScript Exercises
PHP Exercises
Python Exercises
C Programming Exercises
C Sharp Exercises
Java Exercises
SQL Exercises
Oracle Exercises
MySQL Exercises
SQLite Exercises
PostgreSQL Exercises
MongoDB Exercises
Twitter Bootstrap Examples
Others
Excel Tutorials
Useful tools
Google Docs Forms Templates
Google Docs Slide Presentations
Number Conversions
Linux Tutorials
Quizzes
Articles
C Exercises: Check whether two given strings are an anagram
Last update on August 19 2022 21:50:43 (UTC/GMT +8 hours)
C Function : Exercise-11 with Solution
Write a program in C to check whether two given strings are an anagram.

Pictorial Presentation:

C Exercises: Check whether two given strings are an anagram
Sample Solution:

C Code:

#include <stdio.h>  
#include <string.h> 
#include <stdlib.h>  
 

int checkAnagram(char *str1, char *str2);
int main()
{
    char str1[100], str2[100];
    printf("\n\n Function : whether two given strings are anagram :\n");
    printf("\n\n Example : pears and  spare, stone and tones :\n");    
	printf("-------------------------------------------------------\n");
    printf(" Input the  first String : ");
    fgets(str1, sizeof str1, stdin);
    printf(" Input the  second String : ");
    fgets(str2, sizeof str2, stdin);
 
    if(checkAnagram(str1, str2) == 1)
    {
       str1[strlen(str1)-1] = '\0';
       str2[strlen(str2)-1] = '\0';
       printf(" %s and %s are Anagram.\n\n",str1,str2);
    } 
    else 
    {
       str1[strlen(str1)-1] = '\0';
       str2[strlen(str2)-1] = '\0';
       printf(" %s and %s are not Anagram.\n\n",str1,str2);
    }
    return 0;
}
 
int checkAnagram(char *str1, char *str2)
{
    int str1ChrCtr[256] = {0}, str2ChrCtr[256] = {0};
    int ctr;
    if(strlen(str1) != strlen(str2))
    {
        return 0;
    }
    for(ctr = 0; str1[ctr] != '\0'; ctr++)
    {
        str1ChrCtr[str1[ctr]]++;
    } 
    for(ctr = 0; str2[ctr] != '\0'; ctr++)
    {
        str2ChrCtr[str2[ctr]]++;
    }
      for(ctr = 0; ctr < 256; ctr++)
    {
        if(str1ChrCtr[ctr] != str2ChrCtr[ctr])
            return 0;
    }
    return 1;
}
