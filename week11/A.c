#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct Data {
    char Name[101];
    unsigned long long int ID;
    int Score[3]; // Linear Algebra , Calculus , English
};

int main() {
    int n, q, select;
    long long int id;
    struct Data student[105];
    char name[105], subject;
    scanf("%d %d", &n, &q);
    for (int x = 0; x < n; x++) {
        scanf("%s%lld%d%d%d", student[x].Name, &student[x].ID, &student[x].Score[0], &student[x].Score[1], &student[x].Score[2]);
    }
    for (int y = 0; y < q; y++) {
        scanf("%d", &select);
        switch (select) {
        case 1:
            scanf("%s", name);
            for (int a = 0; a < n; a++) {
                if (strcmp(student[a].Name, name) == 0) {
                    printf("%lld\n", student[a].ID);
                    break;
                }
            }
            break;
        case 2:
            scanf("%s %c", name,&subject);
            for (int a = 0; a < n; a++) {
                if (strcmp(student[a].Name, name) == 0) {
                    if (subject == 'L')printf("%d\n", student[a].Score[0]);
                    else if(subject == 'C')printf("%d\n", student[a].Score[1]);
                    else printf("%d\n", student[a].Score[2]);                   
                    break;
                }
            }
            break;
        case 3:
            scanf("%lld", &id);
            for (int c = 0; c < n; c++) {
                if (student[c].ID == id) {
                    printf("%s\n", student[c].Name);
                    break;
                }
            }
            break;
        case 4:
            scanf("%lld %c", &id,&subject);
            for (int d = 0; d < n; d++) {
                if (student[d].ID == id) {
                    if (subject == 'L')printf("%d\n", student[d].Score[0]);
                    else if (subject == 'C')printf("%d\n", student[d].Score[1]);
                    else printf("%d\n", student[d].Score[2]);
                    break;
                }
            }
            break;
        }
    }
    //system("pause");
    return 0;
}
/*
5 4 
Watame 410410606 100 100 40 
Baelz 410410229 76 80 100 
Watson 410410913 99 98 100 
Kanata 410411227 75 85 45
Botan 410410814 68 95 80
1 Watame
2 Baelz E
3 410410913
4 410411227 L

410410606
100
Watson
75
*/
