#include "dx.h"
void ATOME546T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V9=0,V20=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20546;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3824&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,NNNI,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=625)) goto l6;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+2,V20)*/
V20=pile[WZ2]; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V17; 
(*f[207])( );     /*PLUE2(jvj+3,V17)*/
l1:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
pile[v[22]]=160; pile[WZ1]=NNNI; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(160,NNNI,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
x[jvj+9]=d[20];z[jvj+9]=0;
l4:if((x[jvj+9]<=0)) goto l6;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=NNNI; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+10,NNNI,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+10,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=NNNI; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+13,NNNI,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
x[jvj+21]=x[jvj+12] ;z[jvj+21]=z[jvj+12];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+19)*/
pile[v[22]]=jvj+8; pile[WZ1]=160; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+8,160,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=111; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+18,jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+20,jvj+21,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+22; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+22,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+16,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+27)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V20,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3824; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3824,246,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=20546; pile[WZ2]=218; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,20546,218,jvj+26)*/
pile[v[22]]=jvj+27; pile[WZ1]=(-20); pile[WZ2]=jvj+26; pile[WZ3]=159; pile[WZ4]=jvj+28; 
(*f[298])( );     /*TRIENS1(jvj+27,(-20),jvj+26,159,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+28,1,158,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[1296])( );     /*NOUVCONTR0(jvj+16,jvj+17)*/
l5:x[jvj+9]=t[x[jvj+9]];
goto l4;
l3:V9=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V9; 
(*f[207])( );     /*PLUE2(jvj+3,V9)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
