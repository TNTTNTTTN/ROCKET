[X,Y,Z] = sphere(100);
surf(X*Rmean*0.001,Y*Rmean*0.001,Z*Rmean*0.001,"EdgeColor","none");
hold on;
xlabel("X");
ylabel("Y");
zlabel("Z");
plot3(POS.Data(1:240,1).*0.001,POS.Data(1:240,2).*0.001,POS.Data(1:240,3).*0.001, 'b-','LineWidth',4)
plot3(POS.Data(241:900,1).*0.001,POS.Data(241:900,2).*0.001,POS.Data(241:900,3).*0.001, 'r-','LineWidth',4)
plot3(POS.Data(901:end,1).*0.001,POS.Data(901:end,2).*0.001,POS.Data(901:end,3).*0.001, 'k-','LineWidth',4)