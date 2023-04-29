function angular_momentum = euler6para(e,a,raas,inc_ang,arg_perigee)

% Input (Euler 6 parameter)
% parameter for the earth
earthpara % a,b,Rmean
%eccetricity in circular orbit
%Right Ascension of Asecending Node (ohm)
%Argument of Perigee (omega)
%%True anomoly (nu)
nu = 90;
% Output
angular_momentum = [0 0 0]';

mu = 3.986004418*10^(14); % Geocentric gravitational constant [m^3/s^2]
r = Rmean+40000 ; % 위성~회전축 거리 -> 수정필요
velocity = sqrt(mu/a);

angular_momentum = r*norm(velocity)*[0; 0; sin(nu)]; %m = 위성의 질량, 계속해서 변하므로 수정 필요
                                                       %norm = 벡터의 크기 반환 /
                                                       %nu값을 어떻게 받아오는지
                                                    



