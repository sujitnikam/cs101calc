void initcanvas()
    {
    initCanvas("MULTIPURPOSE SCIENTIFIC CALCULATOR WITH GRAPH PLOTTER",1000,600);
    beginFrame();
    Rectangle R1(500,250,980,480);
    R1.setFill(true);
    R1.setColor(COLOR("grey"));

    Rectangle R2(70,45,100,50);
    R2.setFill(true);
    R2.setColor(COLOR("red"));
    Text T2(70,45,"OFF");

    Rectangle R3(180,45,100,50);
    R3.setFill(true);
    R3.setColor(COLOR("GREEN"));
    Text T3(180,45,"ON");

    Rectangle R4(610,45,740,50);
    R4.setFill(true);
    R4.setColor(COLOR("white"));

    Rectangle R5(500,540,980,100);
    R5.setFill(true);
    R5.setColor(COLOR("grey"));

    Rectangle S1(95,515,156,40);
    S1.setFill(true);
    S1.setColor(COLOR("yellow"));
    Text tS1(95,515,"Matrix Solver");

    Rectangle S2(257,515,154,40);
    S2.setFill(true);
    S2.setColor(COLOR("yellow"));
    Text tS2(257,515,"Unit Conversion");

    Rectangle S3(419,515,154,40);
    S3.setFill(true);
    S3.setColor(COLOR("yellow"));
    Text tS3(419,515,"Statistics");

    Rectangle S4(581,515,154,40);
    S4.setFill(true);
    S4.setColor(COLOR("yellow"));
    Text tS4(581,515,"Differentiation");

    Rectangle S5(743,515,154,40);
    S5.setFill(true);
    S5.setColor(COLOR("yellow"));
    Text tS5(743,515,"Integration");

    Rectangle S6(905,515,154,40);
    S6.setFill(true);
    S6.setColor(COLOR("yellow"));
    Text tS6(905,515,"Complex Numbers");

    Rectangle S7(500,560,966,40);
    S7.setFill(true);
    S7.setColor(COLOR("purple"));
    Text tS7(500,560,"SWITCH TO GRAPH PLOTTER");


    Line L01(125,10,125,80);
    Line L02(235,10,235,80);
    Line L1(10,10,990,10);
    Line L2(10,80,990,80);
    Line L3(10,490,990,490);
    Line L4(10,10,10,590);
    Line L5(990,10,990,590);
    Line L6(10,590,990,590);

    Rectangle r11add(50,120,60,60);
    Text tr11add(50,120,"+");

    Rectangle r12sub(50,190,60,60);
    Text tr12add(50,190,"-");

    Rectangle r13mul(50,260,60,60);
    Text tr13mul(50,260,"*");

    Rectangle r14div(50,330,60,60);
    Text tr14div(50,330,"/");

    Rectangle r15modulus(50,400,60,60);
    Text tr15modulus(50,400,"("); //to be filled



    Rectangle r21square(130,120,60,60);
    Text tr21square(130,120,"x^2");

    Rectangle r22cube(130,190,60,60);
    Text tr22cube(130,190,"x^3");

    Rectangle r23inverse(130,260,60,60);
    Text tr23inverse(130,260,"x^-1");

    Rectangle r24power(130,330,60,60);
    Text tr24power(130,330,"x^n");

    Rectangle r25pi(130,400,60,60);
    Text trpi(130,400,"π(pi)");


    Rectangle r31sin(210,120,60,60);
    Text tr31sin(210,120,"sin");

    Rectangle r32sininverse(210,190,60,60);
    Text tr32sininverse(210,190,"sin^-1");

    Rectangle r33factorial(210,260,60,60);
    Text tr33factorial(210,260,"!(fact)");

    Rectangle r34exponential(210,330,60,60);
    Text tr34exponential(210,330,"e");

    Rectangle r35(210,400,60,60);
    Text tr35exponent(210,400,")");


    Rectangle r41cos(290,120,60,60);
    Text tr41cos(290,120,"cos");

    Rectangle r42cosinverse(290,190,60,60);
    Text tr42cosinverse(290,190,"cos^-1");

    Rectangle r43permutation(290,260,60,60);
    Text tr43permutation(290,260,"nPr");

    Rectangle r44logbase10(290,330,60,60);
    Text tr44logbase10(290,330,"log(10)");

    Rectangle r45degree(290,400,60,60);
    r45degree.setFill(true);
    r45degree.setColor(COLOR("blue"));
    Text tr45degree(290,400,"deg");



    Rectangle r51tan(370,120,60,60);
    Text tr51tan(370,120,"tan");

    Rectangle r52taninverse(370,190,60,60);
    Text tr52taninverse(370,190,"tan^-1");

    Rectangle r53combination(370,260,60,60);
    Text tr53combination(370,260,"nCr");

    Rectangle r54logbasee(370,330,60,60);
    Text tr54logbasee(370,330,"log(e)");

    Rectangle r55radian(370,400,60,60);
    Text tr55radian(370,400,"rad");



    Rectangle display(500,450,980,40);
    display.setFill(true);
    display.setColor(COLOR("orange"));
    display.hide();

    Rectangle r9(470,140,100,100);
    Text t9(470,140,"9");
    Rectangle r8(590,140,100,100);
    Text t8(590,140,"8");
    Rectangle r7(710,140,100,100);
    Text t7(710,140,"7");
    Rectangle r6(470,260,100,100);
    Text t6(470,260,"6");
    Rectangle r5(590,260,100,100);
    Text t5(590,260,"5");
    Rectangle r4(710,260,100,100);
    Text t4(710,260,"4");
    Rectangle r3(470,380,100,100);
    Text t3(470,380,"3");
    Rectangle r2(590,380,100,100);
    Text t2(590,380,"2");
    Rectangle r1(710,380,100,100);
    Text t1(710,380,"1");
    Rectangle r0(830,140,100,100);
    Text t0(830,140,"0");
    Rectangle rpoint(830,260,100,100);
    Text tpoint(830,260,".");
    Rectangle rAC(935,140,90,100);
    Text tAC(935,140,"AC");
    Rectangle rdelete(935,260,90,100);
    Text tdelete(935,260,"DELETE");
    Rectangle requal(875,380,210,100);
    Text tequal(875,380,"EQUAL TO =");
    endFrame();
    }
