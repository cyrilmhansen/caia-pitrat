#include "dx.h"
void ATOME6T5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Q=0,V13=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=20006;z[jvj+1]=(-100);
x[jvj+2]=5;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3154&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l8;
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,jvj+5,jvj+6)*/
pile[v[22]]=1182; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1182,jvj+6,jvj+7)*/
if((68!=x[jvj+7])) goto l8;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(870,R,Q)*/
Q=pile[WZ2]; 
x[jvj+14]=incon;
if((Q==2)) goto l1;
if((Q==3)) goto l2;
if((Q==4)) goto l3;
if((Q==5)) goto l4;
if((Q!=6)) goto l8;
x[jvj+14]=605 ;z[jvj+14]=605;
l6:x[jvj+8]=d[20];z[jvj+8]=0;
l5:if((x[jvj+8]<=0)) goto l8;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+9,jvj+10)*/
pile[v[22]]=R; pile[WZ1]=jvj+10; pile[WZ3]=jvj+11; 
(*f[45])( );if(v[102]) goto l7;     /*FNDZ0(R,jvj+10,V13,jvj+11)*/
V13=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+9,R,jvj+12)*/
pile[v[22]]=101; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+18)*/
pile[WZ1]=jvj+12; pile[WZ3]=(-596); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,jvj+12,110,(-596),jvj+19)*/
pile[v[22]]=jvj+14; pile[WZ1]=715; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,715,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,v[13],642,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=3115; pile[WZ2]=246; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,3115,246,jvj+17)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20006; pile[WZ4]=jvj+17; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(158,289,218,20006,jvj+17,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=159; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+18)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+19)*/
(*f[481])( );     /*STOCKER0(jvj+13)*/
l7:x[jvj+8]=t[x[jvj+8]];
goto l5;
l1:x[jvj+14]=602 ;z[jvj+14]=602;
goto l6;
l2:x[jvj+14]=603 ;z[jvj+14]=603;
goto l6;
l3:x[jvj+14]=206 ;z[jvj+14]=206;
goto l6;
l4:x[jvj+14]=604 ;z[jvj+14]=604;
goto l6;
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
