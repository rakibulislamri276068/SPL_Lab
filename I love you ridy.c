
#include<stdio.h>

struct Point{
    int x, y;
};

void multiplyPointByTwo(struct Point *p){
    p->x *= 2;
    p->y *= 2;
}


struct Point multiplyTwoPoints(struct Point p1, struct Point p2){
    struct Point newp;
    newp.x = p1.x * p2.x;
    newp.y = p1.y * p2.y;
    return newp;
}

struct Author{
    int aId;
    int age;
    int numOfBook;
};

struct Book{
    int bId;
    struct Author author;
};

void f(int *a){
    *a = *a + 1;
}

int main(){

//    int a = 10;
//    f(&a);
//    printf("%d", a);

    struct Point p = {3, 4};
    multiplyPointByTwo(&p);
    printf("%d", p.x);

//    struct Author prokity = {1, 23, 20};
//    struct Book kotha = {1, prokity};
//
//    printf("%d", kotha.author.aId);

//    struct Point p1, p2 = {3, 4};
//
//    scanf("%d", &p1.x);
//    scanf("%d", &p1.y);
//    p1.x = 1;
//    p1.y = 2;


//    p2.x = 3;
//    p2.y = 4;

//    struct Point retPoint = multiplyTwoPoints(p1, p2);
//    printf("%d", retPoint.y);
    return 0;

}
