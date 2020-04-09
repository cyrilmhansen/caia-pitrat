#include "dx.h"
void ATOME526T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V21=0;
int NNNK;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=20526;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3879&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNK=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNK; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,NNNK,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=625)) goto l3;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+2,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=jvj+6; 
(*f[3800])( );if(v[102]) goto l3;     /*NEWVAR0(jvj+6)*/
pile[v[22]]=160; pile[WZ1]=NNNK; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(160,NNNK,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+9)*/
x[jvj+10]=d[20];z[jvj+10]=0;
l1:if((x[jvj+10]<=0)) goto l3;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=NNNK; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+11,NNNK,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=484)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+11,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=NNNK; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+14,NNNK,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=41)) goto l2;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+20)*/
pile[WZ3]=485; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+24)*/
pile[WZ3]=486; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+26)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+26; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+26,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=107; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+8)*/
pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+24; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+24,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+25)*/
pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+22,107,jvj+18)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+21,jvj+22,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+23; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+23,jvj+3)*/
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1977])( );if(v[102]) goto l4;     /*FNDCND0(929,jvj+2,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[235])( );     /*PLUSC2(V19,1006,jvj+3)*/
l4:pile[v[22]]=101; pile[WZ1]=NNNK; pile[WZ2]=110; pile[WZ3]=(-11743); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(101,NNNK,110,(-11743),jvj+31)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+27; 
(*f[46])( );     /*TRI0(V21,858,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,v[13],642,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=3879; pile[WZ2]=246; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,3879,246,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=20526; pile[WZ2]=218; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,20526,218,jvj+30)*/
pile[v[22]]=jvj+31; pile[WZ1]=(-20); pile[WZ2]=jvj+30; pile[WZ3]=159; pile[WZ4]=jvj+32; 
(*f[298])( );     /*TRIENS1(jvj+31,(-20),jvj+30,159,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+32,1,158,jvj+19)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+19; 
(*f[1298])( );     /*NOUVCONTR0(jvj+3,jvj+19)*/
l2:x[jvj+10]=t[x[jvj+10]];
goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
