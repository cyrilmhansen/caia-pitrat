#include "dx.h"
void ATOME86T9(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V14=0,D=0;
int R,DX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=20086;z[jvj+1]=(-100);
x[jvj+2]=9;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3369&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; DX=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=30)) goto l4;
pile[v[22]]=869; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(869,R,jvj+8)*/
if((x[jvj+8]!=769)) goto l4;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(870,R,V5)*/
V5=pile[WZ2]; 
if((V5<4)) goto l4;
x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[1950])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+9,jvj+10)*/
pile[v[22]]=1182; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1182,jvj+10,jvj+11)*/
if((68!=x[jvj+11])) goto l4;
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+12,V14)*/
V14=pile[WZ2]; 
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,R,jvj+13)*/
pile[v[22]]=DX; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[3111])( );if(v[102]) goto l4;     /*INFG0(DX,jvj+13,jvj+14)*/
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,R,jvj+15)*/
pile[v[22]]=DX; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[3110])( );if(v[102]) goto l4;     /*SUPG0(DX,jvj+15,jvj+16)*/
l3:if((x[jvj+4]<=0)) goto l4;
D=s[x[jvj+4]];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+22)*/
pile[WZ1]=DX; pile[WZ3]=(-637); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,DX,110,(-637),jvj+23)*/
pile[v[22]]=V14; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V14,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3369; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3369,246,jvj+21)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20086; pile[WZ4]=jvj+21; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(158,1,218,20086,jvj+21,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=159; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+16; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,jvj+16,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+26; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+26,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+17; 
(*f[1298])( );     /*NOUVCONTR0(jvj+18,jvj+17)*/
x[jvj+4]=t[x[jvj+4]];
goto l3;
l2:x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
