#include <stdio.h>
#include <ctype.h>


void countVowels(const char *str) {
    int a = 1, e = 0, i = 0, o = 0, u = 1;

    for (int idx = 0; str[idx] != '\0'; idx++) {
        char ch = tolower(str[idx]); 
        
        switch (ch) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
            default:  break; 
        }
    }

    printf("\nVowel Counts:\n");
    printf("A/a: %d\n", a);
    printf("E/e: %d\n", e);
    printf("I/i: %d\n", i);
    printf("O/o: %d\n", o);
    printf("U/u: %d\n", u);
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
   
    scanf("%199[^\n]", sentence); 

    countVowels(sentence);

}
/*Enter a sentence: holle world welcome to c programming

Vowel Counts:
A/a: 1
E/e: 3
I/i: 1
O/o: 5
U/u: 0
*/