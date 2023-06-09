clear all;
clc;

% unit conversion
r2d = 180/pi;
d2r = pi/180;
% parameter for the earth
earthpara
% parameter for initialize
%Lambdaloninit = 127.284978 * d2r; % Longitude of ground station [rad]
%Lambdalatinit = 34.6112219 * d2r; % Latitude of ground station [rad]
Lambdaloninit =0*d2r;
Lambdalatinit =0*d2r;
Vinit = [0;0;0]; % Velocity @ body frame [u;v;w]
Rotinit = [0;0;0]; % Angular velocity @ body frame [p;q;r]
Attinit = [0;-Lambdalatinit;Lambdaloninit]; % Pose of body frame [phi;theta;psi]
Attinit = Euler2Quat(Attinit);
Posinit = [Rmean*cos(Lambdalatinit)*cos(Lambdaloninit);Rmean*cos(Lambdalatinit)*sin(Lambdaloninit); Rmean*sin(Lambdalatinit)];
% parameter for each scenario
rocketpara
% 1st stage
Mp1 = Ms1+Ms2+Ms3+Mf2+Mf3; % Rocket payload mass when stage 1 operate [kg]
lx1s = lx1+lx2+lx3; % Cylindric modeling when stage 1 operate [m]

% 2nd stage
Mp2 = Ms2+Ms3+Mf3; % Rocket payload mass when stage 2 operate [kg]
lx2s = lx2+lx3; % Cylindric modeling when stage 2 operate [m]

% Satellite
Mp3 = Ms3;
lx3s = lx3;

%Parameter for Control gain
Kp1 = 1;
Kp2 = 0.5;
