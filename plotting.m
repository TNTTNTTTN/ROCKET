[X,Y,Z] = sphere(100);
surf(X*Rmean*0.001,Y*Rmean*0.001,Z*Rmean*0.001,"EdgeColor","none");
hold on;
xlabel("X");
ylabel("Y");
zlabel("Z");
plot3(POS.Data(:,1).*0.001,POS.Data(:,2).*0.001,POS.Data(:,3).*0.001, 'b-','LineWidth',4)