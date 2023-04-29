    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 59;
            section.data(59)  = dumData; %prealloc

                    ;% rtP.Attinit
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Bt1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 4;

                    ;% rtP.Bt2
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 5;

                    ;% rtP.Isp1s
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% rtP.Isp1v
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 7;

                    ;% rtP.Isp2
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 8;

                    ;% rtP.Kp1
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 9;

                    ;% rtP.Kp2
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 10;

                    ;% rtP.Mf1
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 11;

                    ;% rtP.Mf2
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 12;

                    ;% rtP.Mp1
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 13;

                    ;% rtP.Mp2
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 14;

                    ;% rtP.Ms3
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 15;

                    ;% rtP.Msfl1
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 16;

                    ;% rtP.Msfl2
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 17;

                    ;% rtP.Posinit
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 18;

                    ;% rtP.Rmean
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 21;

                    ;% rtP.Rotinit
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 22;

                    ;% rtP.Vinit
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 25;

                    ;% rtP.lx1s
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 28;

                    ;% rtP.lx2s
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 29;

                    ;% rtP.lx3s
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 30;

                    ;% rtP.ly1
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 31;

                    ;% rtP.ly2
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 32;

                    ;% rtP.ly3
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 33;

                    ;% rtP.mu
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 34;

                    ;% rtP.wie
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 35;

                    ;% rtP.LowPassFilterDiscreteorContinuous_K
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 36;

                    ;% rtP.LowPassFilterDiscreteorContinuous1_K
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 37;

                    ;% rtP.LowPassFilterDiscreteorContinuous_T
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 38;

                    ;% rtP.LowPassFilterDiscreteorContinuous1_T
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 39;

                    ;% rtP.CompareToConstant_const
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 40;

                    ;% rtP.CompareToConstant_const_fyftrk53il
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 41;

                    ;% rtP.LowPassFilterDiscreteorContinuous_init_option
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 42;

                    ;% rtP.LowPassFilterDiscreteorContinuous1_init_option
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 43;

                    ;% rtP.Constant_Value
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 44;

                    ;% rtP.Constant_Value_lyipl5atta
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 45;

                    ;% rtP.Integrator4_IC
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 46;

                    ;% rtP.Gain2_Gain
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 50;

                    ;% rtP.Gain1_Gain
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 51;

                    ;% rtP.Integrator_UpperSat
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 52;

                    ;% rtP.Integrator_LowerSat
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 53;

                    ;% rtP.Saturation_UpperSat
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 54;

                    ;% rtP.Saturation_LowerSat
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 55;

                    ;% rtP.Gain_Gain
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 56;

                    ;% rtP.Gain3_Gain
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 57;

                    ;% rtP.Integrator_UpperSat_h00nuw44zs
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 58;

                    ;% rtP.Integrator_LowerSat_mewh5v15vs
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 59;

                    ;% rtP.Saturation_UpperSat_egkpxdd2hd
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 60;

                    ;% rtP.Saturation_LowerSat_kcdgs05bz3
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 61;

                    ;% rtP.Integrator_IC
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 62;

                    ;% rtP.Switch1_Threshold
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 63;

                    ;% rtP.Integrator4_IC_jlsgyxjuqf
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 64;

                    ;% rtP.Constant4_Value
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 68;

                    ;% rtP.Constant1_Value
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 69;

                    ;% rtP.Constant2_Value
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 70;

                    ;% rtP.Constant3_Value
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 71;

                    ;% rtP.Constant4_Value_eqvxhcrvd4
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 72;

                    ;% rtP.Constant5_Value
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 73;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 6;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 86;
            section.data(86)  = dumData; %prealloc

                    ;% rtB.bddenpbj44
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.j3chrhjiaz
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.bcei5zmgyw
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 7;

                    ;% rtB.kbvgah11h4
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 11;

                    ;% rtB.ktldt1hqeb
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 14;

                    ;% rtB.out1on52mc
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 15;

                    ;% rtB.micobu3txc
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 16;

                    ;% rtB.jjxpsmwl0v
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 18;

                    ;% rtB.fuxhodf3mu
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 19;

                    ;% rtB.jt2nv2x55d
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 20;

                    ;% rtB.eebvsq3orw
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 21;

                    ;% rtB.oe1w2iyrzq
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 22;

                    ;% rtB.ft5rioowtz
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 23;

                    ;% rtB.pctl5dpy2a
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 24;

                    ;% rtB.jlrhitwsl3
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 25;

                    ;% rtB.b32c2bmvzy
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 26;

                    ;% rtB.kiugw5nowc
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 27;

                    ;% rtB.lu4c5m5miz
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 28;

                    ;% rtB.p5pzpcjivt
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 31;

                    ;% rtB.gqnaxv0aej
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 34;

                    ;% rtB.ka2g0opaq2
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 37;

                    ;% rtB.av4akdfzex
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 40;

                    ;% rtB.jgmu4cntnu
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 42;

                    ;% rtB.k3ye1bhxk2
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 43;

                    ;% rtB.e5tg3nwa3z
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 44;

                    ;% rtB.pprc2sojtl
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 45;

                    ;% rtB.ci3xiiiq0s
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 48;

                    ;% rtB.isxhmienjx
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 51;

                    ;% rtB.dddupokjkf
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 54;

                    ;% rtB.nhnd355lne
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 57;

                    ;% rtB.pns4nzqi1p
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 60;

                    ;% rtB.jhzk1r5ytp
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 63;

                    ;% rtB.npdusycoqq
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 66;

                    ;% rtB.g0enzwg25a
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 70;

                    ;% rtB.kf1r1nnbbf
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 71;

                    ;% rtB.lpdd0pji14
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 74;

                    ;% rtB.bfjh5ttx5d
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 77;

                    ;% rtB.hu3jcyazau
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 80;

                    ;% rtB.ehvbzgdsbd
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 83;

                    ;% rtB.e0hgmf3lna
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 84;

                    ;% rtB.ogv2dj34t1
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 85;

                    ;% rtB.em3qj5mb0j
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 86;

                    ;% rtB.eksqltc5ph
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 87;

                    ;% rtB.glh0kmcn3e
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 88;

                    ;% rtB.jck3hj2yfb
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 89;

                    ;% rtB.maxfhqa4qg
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 92;

                    ;% rtB.hbw54wmb5r
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 95;

                    ;% rtB.afjzospe3i
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 98;

                    ;% rtB.i1thalf1qu
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 99;

                    ;% rtB.psxkx0n5lg
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 100;

                    ;% rtB.adlczhpcf0
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 101;

                    ;% rtB.kh2ct1ob1u
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 102;

                    ;% rtB.dwcu5hang5
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 103;

                    ;% rtB.djkkpuffgh
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 104;

                    ;% rtB.b3yc2a2cys
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 108;

                    ;% rtB.ctw4uaxlhl
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 109;

                    ;% rtB.ozhmixpt0c
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 110;

                    ;% rtB.iu2eelcpow
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 111;

                    ;% rtB.djl30gp1b4
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 112;

                    ;% rtB.hmomc5la5h
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 113;

                    ;% rtB.jwlhh05nrl
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 114;

                    ;% rtB.abyj52ypkw
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 115;

                    ;% rtB.knmsqw3rgl
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 116;

                    ;% rtB.jtu1si03zo
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 117;

                    ;% rtB.fl3gaw21bb
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 118;

                    ;% rtB.lihuprkth2
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 119;

                    ;% rtB.j0fqbrtyfa
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 122;

                    ;% rtB.dq02rtfmik
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 125;

                    ;% rtB.esotkl5ybw
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 128;

                    ;% rtB.ov1zz1vxro
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 131;

                    ;% rtB.jaglcqtvdh
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 134;

                    ;% rtB.mc4dbinm3s
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 138;

                    ;% rtB.aqc2hj2iie
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 142;

                    ;% rtB.ccejaqny4t
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 145;

                    ;% rtB.leuq35xwty
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 148;

                    ;% rtB.korcar35qr
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 152;

                    ;% rtB.clq34byw1m
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 155;

                    ;% rtB.i1pnkhcd3l
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 158;

                    ;% rtB.ljrcglqxb4
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 159;

                    ;% rtB.jgw3y31v4u
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 162;

                    ;% rtB.k1llhfc00r
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 165;

                    ;% rtB.pkf2l5jxjr
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 169;

                    ;% rtB.lpgqziebnn
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 172;

                    ;% rtB.eyeiubd2vv
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 173;

                    ;% rtB.gqkpyu5i5o
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 174;

                    ;% rtB.ftabaiwbi3
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 177;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtB.ocb3p2twiw
                    section.data(1).logicalSrcIdx = 86;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.np4lv05ekc
                    section.data(2).logicalSrcIdx = 87;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.o5ix2pm1ra.gyn0we22d3
                    section.data(1).logicalSrcIdx = 88;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.lvjpidban0.d1ftndfkkq
                    section.data(1).logicalSrcIdx = 89;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.csfv2saeka.d1ftndfkkq
                    section.data(1).logicalSrcIdx = 90;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.cdh0cejsfe.gyn0we22d3
                    section.data(1).logicalSrcIdx = 91;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 4;
        sectIdxOffset = 6;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtDW.dmvm0z2smx
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.d1gtmzxjii
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.boeci1vi3z
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.he1p5oblay
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.om55dr0bos
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.dz5pc5rmg1
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.adt5wroeub
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 8;

                    ;% rtDW.fw0j3r1gk5
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 43;
            section.data(43)  = dumData; %prealloc

                    ;% rtDW.nosnhapu1c.LoggedData
                    section.data(1).logicalSrcIdx = 8;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.bswbwt4ukq.LoggedData
                    section.data(2).logicalSrcIdx = 9;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.nu0qdvojpw.LoggedData
                    section.data(3).logicalSrcIdx = 10;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.nahin55f4t.LoggedData
                    section.data(4).logicalSrcIdx = 11;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.mqhqt2k5nz.LoggedData
                    section.data(5).logicalSrcIdx = 12;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.asbv3nl5av.LoggedData
                    section.data(6).logicalSrcIdx = 13;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.grbxxfawub.LoggedData
                    section.data(7).logicalSrcIdx = 14;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.l3vu5nm0b1.LoggedData
                    section.data(8).logicalSrcIdx = 15;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.jytvlcl332.LoggedData
                    section.data(9).logicalSrcIdx = 16;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.cdq51tck1j.AQHandles
                    section.data(10).logicalSrcIdx = 17;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.px2txhk5gj.AQHandles
                    section.data(11).logicalSrcIdx = 18;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.ix2gzz3wzl.AQHandles
                    section.data(12).logicalSrcIdx = 19;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.cpjt4iqhpn.AQHandles
                    section.data(13).logicalSrcIdx = 20;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.a2nwsvvaz5.LoggedData
                    section.data(14).logicalSrcIdx = 21;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.n15tqejf2w.LoggedData
                    section.data(15).logicalSrcIdx = 22;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.ox3gz35nvt.LoggedData
                    section.data(16).logicalSrcIdx = 23;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.al4p0bjv3s.LoggedData
                    section.data(17).logicalSrcIdx = 24;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.el2frlnru4.LoggedData
                    section.data(18).logicalSrcIdx = 25;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.jib05m3xfm.LoggedData
                    section.data(19).logicalSrcIdx = 26;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.pucefzdgcx.LoggedData
                    section.data(20).logicalSrcIdx = 27;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.hhxayauo4o.LoggedData
                    section.data(21).logicalSrcIdx = 28;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.gkgonhpb5l.LoggedData
                    section.data(22).logicalSrcIdx = 29;
                    section.data(22).dtTransOffset = 21;

                    ;% rtDW.c3hvopinv3.LoggedData
                    section.data(23).logicalSrcIdx = 30;
                    section.data(23).dtTransOffset = 22;

                    ;% rtDW.pgy5ncolwh.LoggedData
                    section.data(24).logicalSrcIdx = 31;
                    section.data(24).dtTransOffset = 23;

                    ;% rtDW.juag1oua3w.LoggedData
                    section.data(25).logicalSrcIdx = 32;
                    section.data(25).dtTransOffset = 24;

                    ;% rtDW.kqsfsyalmg.LoggedData
                    section.data(26).logicalSrcIdx = 33;
                    section.data(26).dtTransOffset = 25;

                    ;% rtDW.e20omtmcb2.LoggedData
                    section.data(27).logicalSrcIdx = 34;
                    section.data(27).dtTransOffset = 26;

                    ;% rtDW.ea15lsddsg.LoggedData
                    section.data(28).logicalSrcIdx = 35;
                    section.data(28).dtTransOffset = 27;

                    ;% rtDW.b4vsxh42hg.LoggedData
                    section.data(29).logicalSrcIdx = 36;
                    section.data(29).dtTransOffset = 28;

                    ;% rtDW.bm4ucfgt1t.LoggedData
                    section.data(30).logicalSrcIdx = 37;
                    section.data(30).dtTransOffset = 29;

                    ;% rtDW.mu0sralyne.LoggedData
                    section.data(31).logicalSrcIdx = 38;
                    section.data(31).dtTransOffset = 30;

                    ;% rtDW.iyy4cwby4u.LoggedData
                    section.data(32).logicalSrcIdx = 39;
                    section.data(32).dtTransOffset = 31;

                    ;% rtDW.eqdwq5f1hz.LoggedData
                    section.data(33).logicalSrcIdx = 40;
                    section.data(33).dtTransOffset = 32;

                    ;% rtDW.aeiqyucda5.LoggedData
                    section.data(34).logicalSrcIdx = 41;
                    section.data(34).dtTransOffset = 33;

                    ;% rtDW.iqrfe4fcq4.LoggedData
                    section.data(35).logicalSrcIdx = 42;
                    section.data(35).dtTransOffset = 34;

                    ;% rtDW.kiz5oepj3l.LoggedData
                    section.data(36).logicalSrcIdx = 43;
                    section.data(36).dtTransOffset = 35;

                    ;% rtDW.boeow2bm22.LoggedData
                    section.data(37).logicalSrcIdx = 44;
                    section.data(37).dtTransOffset = 36;

                    ;% rtDW.czlr4qphqs.LoggedData
                    section.data(38).logicalSrcIdx = 45;
                    section.data(38).dtTransOffset = 37;

                    ;% rtDW.g4mvca1i43.LoggedData
                    section.data(39).logicalSrcIdx = 46;
                    section.data(39).dtTransOffset = 38;

                    ;% rtDW.d2qklu544f.LoggedData
                    section.data(40).logicalSrcIdx = 47;
                    section.data(40).dtTransOffset = 39;

                    ;% rtDW.h4l1hzspby.LoggedData
                    section.data(41).logicalSrcIdx = 48;
                    section.data(41).dtTransOffset = 40;

                    ;% rtDW.bb4lkbm1md.LoggedData
                    section.data(42).logicalSrcIdx = 49;
                    section.data(42).dtTransOffset = 41;

                    ;% rtDW.hxd5gr441n.LoggedData
                    section.data(43).logicalSrcIdx = 50;
                    section.data(43).dtTransOffset = 42;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtDW.k03ujfya4r
                    section.data(1).logicalSrcIdx = 51;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.paojkwi1rt
                    section.data(2).logicalSrcIdx = 52;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ao2ofrlfpp
                    section.data(3).logicalSrcIdx = 53;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.lzsej45r0o
                    section.data(4).logicalSrcIdx = 54;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.lkyqridsbk
                    section.data(5).logicalSrcIdx = 55;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.jken40hs34
                    section.data(6).logicalSrcIdx = 56;
                    section.data(6).dtTransOffset = 7;

                    ;% rtDW.ev445lj5pd
                    section.data(7).logicalSrcIdx = 57;
                    section.data(7).dtTransOffset = 10;

                    ;% rtDW.fwb1s0siq2
                    section.data(8).logicalSrcIdx = 58;
                    section.data(8).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% rtDW.edvcjysz1h
                    section.data(1).logicalSrcIdx = 59;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.llssf3xx0w
                    section.data(2).logicalSrcIdx = 60;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.gatfaphjb0
                    section.data(3).logicalSrcIdx = 61;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.nqvdwzkqqv
                    section.data(4).logicalSrcIdx = 62;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.bbvvmnonjv
                    section.data(5).logicalSrcIdx = 63;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.mxc4xdmhnf
                    section.data(6).logicalSrcIdx = 64;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.ai5tkm230r
                    section.data(7).logicalSrcIdx = 65;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 425980448;
    targMap.checksum1 = 97785928;
    targMap.checksum2 = 3073931720;
    targMap.checksum3 = 3373487905;

