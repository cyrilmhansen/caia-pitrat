#include "dx.h"
void ATOME568T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,V12=0,V26=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=20568;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3896&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l8;
x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1950])( );if(v[102]) goto l8;     /*FNDOND0(498,jvj+7,jvj+8)*/
pile[v[22]]=1182; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1182,jvj+8,jvj+9)*/
if((68!=x[jvj+9])) goto l8;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+2,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+10; 
(*f[1363])( );     /*VAROBJ0(R,jvj+10)*/
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1977])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V23; 
(*f[207])( );     /*PLUE2(jvj+3,V23)*/
l1:pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,R,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
x[jvj+11]=d[20];z[jvj+11]=0;
l4:if((x[jvj+11]<=0)) goto l8;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+12,R,jvj+13)*/
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+12,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+14,R,jvj+15)*/
x[jvj+34]=x[jvj+10] ;z[jvj+34]=z[jvj+10];
l6:if((x[jvj+34]<=0)) goto l5;
x[jvj+16]=s[x[jvj+34]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+34];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[1292])( );if(v[102]) goto l7;     /*DEPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[3897])( );if(v[102]) goto l7;     /*INFBV0(jvj+17,jvj+13,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+15; pile[WZ2]=jvj+20; 
(*f[3898])( );if(v[102]) goto l7;     /*SUPBV0(jvj+17,jvj+15,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
x[jvj+27]=x[jvj+19] ;z[jvj+27]=z[jvj+19];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,jvj+21,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+26,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+22,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+32)*/
pile[v[22]]=V26; pile[WZ1]=858; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(V26,858,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,v[13],642,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=3896; pile[WZ2]=246; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,3896,246,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=20568; pile[WZ2]=218; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+30,20568,218,jvj+31)*/
pile[v[22]]=jvj+32; pile[WZ1]=(-20); pile[WZ2]=jvj+31; pile[WZ3]=159; pile[WZ4]=jvj+33; 
(*f[298])( );     /*TRIENS1(jvj+32,(-20),jvj+31,159,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+33,1,158,jvj+23)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[1298])( );     /*NOUVCONTR0(jvj+22,jvj+23)*/
l7:x[jvj+34]=t[x[jvj+34]];
goto l6;
l3:V12=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V12; 
(*f[207])( );     /*PLUE2(jvj+3,V12)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l5:x[jvj+11]=t[x[jvj+11]];
goto l4;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
