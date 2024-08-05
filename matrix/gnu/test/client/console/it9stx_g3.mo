model rv9cp_g1 "Description"
    
    parameter Real g1 = 0.1;
    parameter Real g2 = 0.2;
    parameter Real g3 = 0.3;
    parameter Real g4 = 0.4;
    parameter Real g5 = 0.5;
    parameter Real g6 = 0.6;
    parameter Real g7 = 0.7;
    parameter Real g8 = 0.8;
    parameter Real g9 = 0.9;

 equation 
 // Derivatives
 dx = g1 * u - g2 * x;
 dy = g3 * u - g4 * y;
 de = g5 * u - g6 * e;
 
end rv9cp_g1;