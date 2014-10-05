//
//  JBRACKETT_HOMEWORK_1_1.c
//  OMIS30
//
//  Created by Jacob Brackett on 10/4/14.
//  Copyright (c) 2014 Jacob Brackett. All rights reserved.
//

#include <stdio.h>
int main(){
    printf("What is your name?: ");
    char name;
    scanf("%s", &name);
    printf("Hello %s, welcome to OMIS 30!", &name);
    return 0;
}