// Шаблон задания 3.1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

#define STRINGS_COUNT   100000
#define MAX_STRING_SIZE 100

char name = '0';
unsigned char strings[STRINGS_COUNT][MAX_STRING_SIZE];


void GenerateRandomString(char* str, unsigned int max_size) {

    

    
        unsigned int size = rand() % (max_size + 1);
        if (size == 0) {
            size++;
        }

        for (int i = 0; i < size; i++) {
            str[i] = rand() % (109 - 48 + 1) + 48;
            if ((str[i] > 57) && (str[i] <= 83)) {
                str[i] += 7;
            }
            else if (str[i] >= 84) {
                str[i] += 13;
            }
            //str[i] = 89;
        }

        if (size < max_size) {
            str[size] = '\0';
        }

        
    
}


void GenerateRandomStrings(char strings[][MAX_STRING_SIZE]) {

    for (int i =0; i<STRINGS_COUNT; i++) {
        GenerateRandomString(strings[i], MAX_STRING_SIZE);
    }

}

void PrintStrings(char strings[][MAX_STRING_SIZE]) {
    for (int i = 0; i < STRINGS_COUNT; i++) {
        printf("%d \t", i);
        if (strlen(strings[i]) < MAX_STRING_SIZE) {
            printf("%s", strings[i]);
        }
        else {
            for (int j = 0; j < MAX_STRING_SIZE; j++) {
                printf("%c", strings[i][j]);
            }
        }
       
        printf("\n");
    }

}


//int test_str_1(char  str_1[MAX_STRING_SIZE] , char  str_2[MAX_STRING_SIZE]) {
//    int kol_pr=0 ;
//    /*if ((str_1[0] > str_2[0])) {
//        k = 1;
//    }
//    return(k);*/
//    for (int i = 0; i < MAX_STRING_SIZE-kol_pr; i++) {
//    //for (int i = 0; i < 2; i++) {
//        if (str_1[i] == '\0') {
//            return(0);
//        }
//        else if (str_2[i] == '\0') {
//            return(1);
//        }
//        else if (str_1[i] > str_2[i]) {
//            return(1);
//        }
//        else if (str_1[i] < str_2[i]) {
//            return(0);
//        }
//        kol_pr++;
//
//        
//    }
//    return(0);
//}
//int test_str_2(char  str_1[MAX_STRING_SIZE], char  str_2[MAX_STRING_SIZE]) {
//    int kol_pr = 0;
//    for (int i = 0; i < MAX_STRING_SIZE - kol_pr; i++) {
//        //for (int i = 0; i < 2; i++) {
//        if (str_1[i] == '\0') {
//            return(0);
//        }
//        else if (str_2[i] == '\0') {
//            return(1);
//        }
//        else if ((tolower(str_1[i])) > (tolower( str_2[i]))) {
//            return(1);
//        }
//        else if ((tolower(str_1[i])) < (tolower(str_2[i]))) {
//            return(0);
//        }
//        kol_pr++;
//
//
//    }
//    return(0);
//}
//int test_str_3(char  str_1[MAX_STRING_SIZE], char  str_2[MAX_STRING_SIZE]) {
//    int kol_pr = 0;
//    int max_1 = strlen(str_1), max_2 = strlen(str_2);
//    if (max_1 > MAX_STRING_SIZE) {
//        max_1 = MAX_STRING_SIZE;
//    }
//    if (max_2 > MAX_STRING_SIZE) {
//        max_2 = MAX_STRING_SIZE;
//    }
// 
//    if (max_1 > max_2) {
//        return(1);
//    }
//    else if (max_1 == max_2) {
//        return(test_str_1(str_1,str_2));
//    }
//    else {
//       return(0);
//    }
//    
//   
//   
//}
//int test_str_4(char  str_1[MAX_STRING_SIZE], char  str_2[MAX_STRING_SIZE]) {
//    int kol_pr = 0;
//    for (int i = 0; i < MAX_STRING_SIZE - kol_pr; i++) {
//        //for (int i = 0; i < 2; i++) {
//        if (str_2[i] == '\0') {
//            return(0);
//        }
//        else if (str_1[i] == '\0') {
//            return(1);
//        }
//        else if (str_1[i] < str_2[i]) {
//            return(1);
//        }
//        else if (str_1[i] > str_2[i]) {
//            return(0);
//        }
//        kol_pr++;
//
//
//    }
//    return(0);
//}
//int test_str_5(char  str_1[MAX_STRING_SIZE], char  str_2[MAX_STRING_SIZE]) {
//    int kol_pr = 0;
//    int max_1 = strlen(str_1), max_2 = strlen(str_2);
//    if (max_1 > MAX_STRING_SIZE) {
//        max_1 = MAX_STRING_SIZE;
//    }
//    if (max_2 > MAX_STRING_SIZE) {
//        max_2 = MAX_STRING_SIZE;
//    }
//
//    if (max_1 < max_2) {
//        return(1);
//    }
//    else if (max_1 == max_2) {
//        return(test_str_4(str_1, str_2));
//    }
//    else {
//        return(0);
//    }
//
//
//
//}

int test_str_1(char  str_1[MAX_STRING_SIZE], char  str_2[MAX_STRING_SIZE]) {
    int kol_pr = 0;
    for (int i = 0; i < MAX_STRING_SIZE - kol_pr; i++) {
        //for (int i = 0; i < 2; i++) {
        if (str_1[i] == '\0') {
            return(-1);
        }
        else if (str_2[i] == '\0') {
            return(1);
        }
        else if (str_1[i] > str_2[i]) {
            return(1);
        }
        else if (str_1[i] < str_2[i]) {
            return(-1);
        }
        kol_pr++;
    }
    
    return(0);
}
int test_str_2(char  str_1[MAX_STRING_SIZE], char  str_2[MAX_STRING_SIZE]) {
    int kol_pr = 0;
    for (int i = 0; i < MAX_STRING_SIZE - kol_pr; i++) {
        //for (int i = 0; i < 2; i++) {
        if (str_1[i] == '\0') {
            return(-1);
        }
        else if (str_2[i] == '\0') {
            return(1);
        }
        else if ((tolower(str_1[i])) > (tolower(str_2[i]))) {
            return(1);
        }
        else if ((tolower(str_1[i])) < (tolower(str_2[i]))) {
            return(-1);
        }
        kol_pr++;


    }
    return(0);
}
int test_str_3(char  str_1[MAX_STRING_SIZE], char  str_2[MAX_STRING_SIZE]) {
    int kol_pr = 0;
    int max_1 = strlen(str_1), max_2 = strlen(str_2);
    if (max_1 > MAX_STRING_SIZE) {
        max_1 = MAX_STRING_SIZE;
    }
    if (max_2 > MAX_STRING_SIZE) {
        max_2 = MAX_STRING_SIZE;
    }

    if (max_1 > max_2) {
        return(1);
    }
    else if (max_1 == max_2) {
        return(test_str_1(str_1, str_2));
    }
    else {
        return(-1);
    }



}
int test_str_4(char  str_1[MAX_STRING_SIZE], char  str_2[MAX_STRING_SIZE]) {
    int kol_pr = 0;
    for (int i = 0; i < MAX_STRING_SIZE - kol_pr; i++) {
        //for (int i = 0; i < 2; i++) {
        if (str_2[i] == '\0') {
            return(-1);
        }
        else if (str_1[i] == '\0') {
            return(1);
        }
        else if (str_1[i] < str_2[i]) {
            return(1);
        }
        else if (str_1[i] > str_2[i]) {
            return(-1);
        }
        kol_pr++;


    }
    return(0);
}
int test_str_5(char  str_1[MAX_STRING_SIZE], char  str_2[MAX_STRING_SIZE]) {
    int kol_pr = 0;
    int max_1 = strlen(str_1), max_2 = strlen(str_2);
    if (max_1 > MAX_STRING_SIZE) {
        max_1 = MAX_STRING_SIZE;
    }
    if (max_2 > MAX_STRING_SIZE) {
        max_2 = MAX_STRING_SIZE;
    }

    if (max_1 < max_2) {
        return(1);
    }
    else if (max_1 == max_2) {
        return(test_str_4(str_1, str_2));
    }
    else {
        return(-1);
    }



}
//пузырек 

//void SortStrings(char strings[][MAX_STRING_SIZE], int (* compareStringsFunction)(char * ,char *)) {
//
//   
//    int k = 0;
//    char  temp=0;
//    int f = 1;
//    do {
//        f = 0;
//        for (int i = 1; i < STRINGS_COUNT; i++) {
//            //k = test_str(strings[i - 1], strings[i]);
//            k= compareStringsFunction(strings[i - 1], strings[i]);
//            if (k == 1) {
//                for (int j = 0; j < MAX_STRING_SIZE; j++) {
//                    temp = strings[i - 1][j]; // 
//                    strings[i - 1][j] = strings[i][j];
//                    strings[i][j] = temp;
//                }
//                f = 1;
//
//            }
//        }
//       
//    } while (f == 1);
//
//}


void qsort_t(int b, int e, int(*compareStringsFunction)(char*, char*))
{
    int l = b, r = e;
    int p = l;
    char t = 0;
    char piv[MAX_STRING_SIZE];// Опорным элементом для примера возьмём левый

    //strcpy_s(piv, MAX_STRING_SIZE, strings[p]);
    for (int k = 0; k < MAX_STRING_SIZE; k++) {
        piv[k] = strings[p][k];
    }
    while (l < r)
    {

        while ((compareStringsFunction(strings[r], piv) >= 0) && (l < r)) {
            r--;
        }
        if (l != r) {
            for (int ii = 0; ii < MAX_STRING_SIZE; ii++) {
                strings[l][ii] = strings[r][ii];
            }
            l++;
        }
        while ((compareStringsFunction(strings[l], piv) <= 0) && (l < r)) {
            l++;
        }
        if (l != r) {
            for (int ii = 0; ii < MAX_STRING_SIZE; ii++) {
                strings[r][ii] = strings[l][ii];
            }
            r--;
        }
    }
    for (int ii = 0; ii < MAX_STRING_SIZE; ii++) {
        //t = strings[p][ii];
        strings[l][ii] = piv[ii];
        //strings[r][ii] = t;
    }
    p = l;
    if (b < p) {
        qsort_t(b, p - 1, compareStringsFunction);
    }
    if (e > p) {
        qsort_t(p + 1, e, compareStringsFunction);
    }
}



int main() {
    setlocale(LC_ALL, "Rus");
    printf("Сортировка в лексикографическом порядке с учетом регистра : 1\nСортировка в лексикографическом порядке без учета регистра: 2\nCортировка по возрастанию длины строки : 3\nСортировка в обратном лексикографическом порядке с учетом регистра : 4\nСортировка по убыванию длины строки : 5\n");
    char v_r;
    scanf_s("%c", &v_r);
    srand(time(NULL));//устанавливаю от времени 
    //unsigned char strings[STRINGS_COUNT][MAX_STRING_SIZE];
    int (*compare)(char*, char*);
    if (v_r == '1') {
        compare = test_str_1;
    }
    else  if (v_r == '2') {
        compare = test_str_2;
    }
    else  if (v_r == '3') {
        compare = test_str_3;
    }
    else if (v_r == '4') {
        compare = test_str_4;
    }
    else  if (v_r == '5') {
        compare = test_str_5;
    }
    else {
        exit(1);
    }
    GenerateRandomStrings(strings);
    //PrintStrings(strings);
    //SortStrings(strings, compare);
    qsort_t( 0,STRINGS_COUNT-1 , compare);
    printf("\n");
    //PrintStrings(strings);
    printf("end\n");
    return 0;
}