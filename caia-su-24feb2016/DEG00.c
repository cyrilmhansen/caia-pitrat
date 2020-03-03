#include "dx.h"
void DEG00(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=31;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[jvj+22]=incon;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=25)) goto l1;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,A,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,A,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+23)*/
pile[WZ3]=52; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+31; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+31,jvj+24)*/
pile[WZ2]=111; pile[WZ3]=jvj+23; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+23,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=107; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+4)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+24)*/
l4:pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[887])( );     /*VARND0(jvj+10,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==x[B]) goto l5;
x[R]=x[jvj+10] ;z[R]=z[jvj+10];
l7:pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+10,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=485)) goto l9;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+19; 
(*f[887])( );     /*VARND0(jvj+10,jvj+19)*/
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==x[B]) goto l8;
l9:if(x[R]==incon) goto l10;
l12:v[0]=jvj; v[22]-=3; return;
l1:x[jvj+10]=x[A] ;z[jvj+10]=z[A];
goto l4;
l3:x[jvj+7]=s[x[jvj+20]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+20];
pile[v[22]]=B; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[3843])( );     /*DEG00(B,jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+8)*/
x[jvj+20]=t[x[jvj+20]];
l2:if((x[jvj+20]>0)) goto l3;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+21; 
(*f[299])( );     /*COPEL0(jvj+9,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+21; pile[WZ2]=107; pile[WZ3]=jvj+29; 
(*f[301])( );     /*TRI11(jvj+28,jvj+21,107,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+29,22,100,jvj+22)*/
goto l9;
l5:for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==x[B]) goto l6;
goto l7;
l6:pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+10,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]==596)) goto l13;
if((x[jvj+13]!=52)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+10,jvj+14)*/
pile[v[22]]=B; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[3843])( );     /*DEG00(B,jvj+14,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+26; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+26,R)*/
goto l7;
l8:pile[v[22]]=107; pile[WZ1]=jvj+10; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,jvj+10,jvj+20)*/
x[jvj+9]=0 ;z[jvj+9]=0;
goto l2;
l10:if(x[jvj+22]!=incon) goto l11;
l14:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l12;
l11:pile[v[22]]=jvj+22; pile[WZ1]=R; 
(*f[965])( );if(v[102]) goto l14;     /*NORM0(jvj+22,R)*/
goto l12;
l13:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l7;
}
