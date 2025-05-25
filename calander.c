#include<stdio.h>

int main() {

    for(int j=0; j<=20; j++) {

        int y,m,d;
        int days,mdays,ohalf,ehalf,mmdays,mmmdays;
        float dddays,ddddays;
        int ddays;
        int i,k,l,r,s,t,g,a;
        int z=1,x=2,c=3,v=4,b=5,u=6,o=0;
        int f=7,w=7,e=7,q=7,h=7,p=7,n=7;

        printf("\t\nEnter date :");
        scanf("%d/%d/%d",&d,&m,&y);
        m=m-1;

        if(m==2) {
            mdays=59;
        } else if(m%2==0) {
            ohalf=31*(m/2);
            ehalf=30*(m/2);
            mdays=ohalf+ehalf;
        } else {
            ohalf=31*((m-1)/2);
            ehalf=30*((m-1)/2);
            mdays=ohalf+ehalf+31;
        }

        if(m>2) {
            mmdays=mdays-2;
        } else {
            mmdays=mdays;
        }

        days=mmdays+d;
        ddays=days%7;

        if(m>7) {
            dddays=ddays+1;
        } else {
            dddays=ddays;
        }

        if(m==9||m==11) {
            dddays=dddays-1;
        } else {
            dddays=dddays;
        }

        if(y%4==0&&m>2) {
            dddays=dddays+1;
        } else {
            dddays=dddays;
        }

        i=y-2022;
        k=i%7;
        l=y%4;
        r=y-l;
        s=r-2020;
        t=s/4;
        g=k+t+1;
        a=g%7;

        if(y%4==0) {
            a=a-1;
        } else {
            a=a;
        }

        if(a==-1) {
            a=6;
        } else {
            a=a;
        }

        if(a<0) {
            a=a+7;
        } else {
            a=a;
        }

        if(z==a) {
            z=1;
            x=2;
            c=3;
            v=4;
            b=5;
            u=6;
            o=0;
            n=7;
        } else if(x==a) {
            x=1;
            c=2;
            v=3;
            b=4;
            u=5;
            o=6;
            z=0;
            f=7;
        } else if(c==a) {
            c=1;
            v=2;
            b=3;
            u=4;
            o=5;
            z=6;
            x=0;
            w=7;
        } else if(v==a) {
            v=1;
            b=2;
            u=3;
            o=4;
            z=5;
            x=6;
            c=0;
            e=7;
        } else if(b==a) {
            b=1;
            u=2;
            o=3;
            z=4;
            x=5;
            c=6;
            v=0;
            q=7;
        } else if(u==a) {
            u=1;
            o=2;
            z=3;
            x=4;
            c=5;
            v=6;
            b=0;
            h=7;
        } else if(o==a) {
            o=1;
            z=2;
            x=3;
            c=4;
            v=5;
            b=6;
            u=0;
            p=7;
        }

        if(dddays==z||dddays==f) {
            printf("Saturday\n");
        } else if(dddays==x||dddays==w) {
            printf("Sunday\n");
        } else if(dddays==c||dddays==e) {
            printf("Monday\n");
        } else if(dddays==v||dddays==q) {
            printf("Tuesday\n");
        } else if(dddays==b||dddays==h) {
            printf("Wednesday\n");
        } else if(dddays==u||dddays==p) {
            printf("Thursday\n");
        } else if(dddays==o||dddays==n) {
            printf("Friday\n");
        }

    }

}