#include "dx.h"
void ETUTILISE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V4=0,V5=0,V8=0,V13=0,V11=0,V12=0;
int KK,BK,UR,NR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=10988;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==382&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
KK=pile[v[22]]; BK=pile[v[22]+1]; UR=pile[v[22]+2]; NR=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=jvj+3; 
(*f[138])( );if(v[102]) goto l4;     /*EXPPB0(jvj+3)*/
if((x[BK]!=324)) goto l1;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1484,854,V6)*/
V6=pile[WZ2]; 
V4=sepfacts+1;
V5=sepfacts+V6;
l2:if((V4>V5)) goto l4;
V8=r[V4];
if((V8!=1)) goto l3;
x[jvj+6]=V4 ;z[jvj+6]=(V4<=sepcte) ? V4 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(983,jvj+6,jvj+7)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[v[22]]=1001; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1001,jvj+8,jvj+9)*/
if((x[jvj+9]==0)) goto l3;
V13=x[jvj+6];
pile[v[22]]=20; pile[WZ1]=0; pile[WZ2]=(-89); 
(*f[41])( );     /*SRB0(20,0,(-89),V11)*/
V11=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V13; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(20,V13,V11,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
pile[v[22]]=jvj+8; pile[WZ1]=KK; pile[WZ2]=UR; pile[WZ3]=68; pile[WZ4]=jvj+3; pile[WZ5]=NR; pile[v[22]+6]=jvj+10; 
(*f[448])( );     /*SORINU0(jvj+8,KK,UR,68,jvj+3,NR,jvj+10)*/
l3:V4++;
goto l2;
l1:pile[v[22]]=983; pile[WZ1]=BK; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(983,BK,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=KK; pile[WZ2]=UR; pile[WZ3]=68; pile[WZ4]=jvj+3; pile[WZ5]=NR; pile[v[22]+6]=jvj+5; 
(*f[448])( );     /*SORINU0(jvj+4,KK,UR,68,jvj+3,NR,jvj+5)*/
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
}
