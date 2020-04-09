#include "dx.h"
void LOGIGRAPH6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S=0,I=0,V7=0,V25=0,V5=0,SS=0,V10=0,V27=0,V8=0,V14=0,V30=0,V15=0,V31=0,V34=0,V16=0,V32=0,V21=0,V13=0,NK=0,V36=0,MA=0,MB=0,V35=0,NT=0,V23=0,V4=0,V3=0,N=0,V24=0,V38=0,K=0,V20=0,V18=0,V22=0,V19=0,V37=0;
int H,V,MH;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=26166;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2701&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; V=pile[v[22]+1]; MH=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=0 ;z[jvj+7]=0;
V23=H-1;
I=0;
l16:if((I<=V23)) goto l18;
x[NNNE]=x[jvj+7] ;z[NNNE]=z[jvj+7];
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l3:pile[v[22]]=S; pile[WZ1]=I; pile[WZ2]=(-8615); 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(S,I,(-8615),V7)*/
V7=pile[WZ3]; 
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=V7; 
(*f[186])( );     /*BTC0(jvj+2,117,V7)*/
l2:S++;
l1:if((S<=K)) goto l3;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+2,V25)*/
V25=pile[WZ2]; 
V5=V25;
V18=V5+K;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
SS=V21;
l4:if((SS<=N)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+3,V27)*/
V27=pile[WZ2]; 
V8=V27;
V22=V8+N;
V19=V20-V22;
V37=K+V38;
l21:if((V18>V19)) goto l20;
x[jvj+4]=0 ;z[jvj+4]=0;
V15=incon;
if((K==0)) goto l10;
V31=V18-1;
V15=V31;
l12:pile[v[22]]=V21; pile[WZ1]=I; pile[WZ2]=(-8615); 
(*f[203])( );if(v[102]) goto l22;     /*FTAB0(V21,I,(-8615),V13)*/
V13=pile[WZ3]; 
NK=V13;
V16=incon;
if((K==V24)) goto l11;
V32=V18+NK;
V16=V32;
l13:V36=I*V;
MA=V15;
MB=V16;
l14:if((MA>MB)) goto l22;
V14=incon;
if((MA>=V18)) goto l7;
V14=0;
l7:V30=V18+NK;
if((MA>=V30)) goto l8;
if(V14==incon) goto l9;
l15:V35=MA+V36;
NT=V14;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+9)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V35; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,V35,jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=111; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,111,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+16,jvj+15,jvj+13)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NT; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,NT,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=111; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,111,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=103; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+10,jvj+11,103,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+12,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
MA++;
goto l14;
l6:pile[v[22]]=SS; pile[WZ1]=I; pile[WZ2]=(-8615); 
(*f[203])( );if(v[102]) goto l5;     /*FTAB0(SS,I,(-8615),V10)*/
V10=pile[WZ3]; 
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=V10; 
(*f[186])( );     /*BTC0(jvj+3,117,V10)*/
l5:SS++;
goto l4;
l8:V14=0;
goto l15;
l9:V14=1;
goto l15;
l10:V15=0;
goto l12;
l11:V34=V-1;
V16=V34;
goto l13;
l17:I++;
goto l16;
l18:pile[v[22]]=1; pile[WZ1]=I; pile[WZ2]=(-8615); 
(*f[203])( );if(v[102]) goto l17;     /*FTAB0(1,I,(-8615),V4)*/
V4=pile[WZ3]; 
if((V4<=0)) goto l17;
pile[v[22]]=I; pile[WZ1]=(-8615); 
(*f[3981])( );if(v[102]) goto l17;     /*LONGUEUR0(I,(-8615),V3)*/
V3=pile[WZ2]; 
N=V3;
V24=N-1;
V38=I*MH;
K=0;
l19:if((K>V24)) goto l17;
V21=K+1;
V20=V+V21;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
S=1;
goto l1;
l20:K++;
goto l19;
l22:pile[v[22]]=jvj+4; pile[WZ1]=jvj+6; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+17)*/
pile[WZ3]=26; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+20)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2850); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2850),jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V37; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,V37,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+27,jvj+26,jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V18; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,V18,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+21,jvj+22,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+23,jvj+18)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+6; pile[WZ2]=107; pile[WZ3]=jvj+30; 
(*f[301])( );     /*TRI11(jvj+29,jvj+6,107,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+30,22,100,jvj+19)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+17; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+17,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+18)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+19)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[522])( );     /*PLUB2(jvj+7,jvj+8)*/
V18++;
goto l21;
}
