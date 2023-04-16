function Quat = Euler2Quat(Euler)
% transformatioin from 3-2-1 rotating Euler angle rotation

phi = Euler(1);
theta = Euler(2);
psi = Euler(3);

q0 = cos(phi/2)*cos(theta/2)*cos(psi/2) + sin(phi/2)*sin(theta/2)*sin(psi/2);
q1 = sin(phi/2)*cos(theta/2)*cos(psi/2) - cos(phi/2)*sin(theta/2)*sin(psi/2);
q2 = cos(phi/2)*sin(theta/2)*cos(psi/2) + sin(phi/2)*cos(theta/2)*sin(psi/2);
q3 = cos(phi/2)*cos(theta/2)*sin(psi/2) - sin(phi/2)*sin(theta/2)*cos(psi/2);

Quat = [q0;q1;q2;q3];
end

