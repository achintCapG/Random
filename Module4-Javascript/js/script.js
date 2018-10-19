//var x="Hey Baby!";
//var mess="in global";
//console.log("global:message="+mess);

/*var a =function(){
	console.log("a :message ="+mess);
	b();
}
function b () {
	console.log("b :message ="+mess); 
}
a();*/

// var x;
// console.log(x);
// console.log((5+4)/3);
// console.log(undefined/5);
// function test (a) {
// 	console.log(a/5);
// }test();

// var x=4,y=4;
// if(x==y)
// {
// 	console.log("x = y");
// }
// x="4";
// if(x==y)
// {
// 	console.log("x=y");
// }

// if(x===y)
// {
// 	console.log("x == y");
// }
// else
// {
// 	console.log(" x != y");
// }


// if(false || null|| undefined ||"" ||0 ||NaN)
// {
// 	console.log("This line will never execute");
// }
// else
// {
// 	console.log("all false");
// }
// if(true && "hello" && 1 && -1 && "false")
// {
// 	console.log("All true");
// }

// function a()
// {
// 	return{
// 		name:"Achint"
// 	};
// }
// console.log(a());
// function orderAwith(dish){
// 	dish=dish||"Whatever";
// 	console.log("A with "+dish);
// }
// orderAwith("B");
// orderAwith();

// var company=new Object();
// company.name="Facebook";
// company.ceo=new Object();
// company.ceo.name="MARK";

// console.log(company);
// console.log("Company CEO = "+company.ceo.name);

// company["stock of company"]=110;
// console.log(company["stock of company"]);

// var company = {
// 	name:"FAcebook",
// 	ceo: {
// 		firstname:"Mark",
// 		favcolor:"Blue"
// 	},
// 	"stock of company":110
// };

// console.log(company);

// function multiply(x,y){
// 	return x*y;
// }
// console.log(multiply(5,3));
// console.log(multiply.toString());

// function makeMultiplier(multiplier) {
// 	var Func=function(x) {
// 		return multiplier *x;
// 	};
// 	return Func;
// }
// var multiplyby3=makeMultiplier(3);
// console.log(multiplyby3(5));
// var doubleALL = makeMultiplier(2);
// console.log(doubleALL(20));

// function deOperation(x,operation) {
// 	return operation(x);
// }
// var result =deOperation(5,multiplyby3);
// console.log(result);

// function Circle(radius) {
// 	this.radius=radius;

// 	this.getArea = function() {
// 		return Math.PI *Math.pow(this.radius,2);
// 	};
// }
// var fuc=new Circle(10);
// console.log(fuc);
// // console.log(fuc.getArea());

// function Circle(radius) {
// 	this.radius=radius;
// }
// Circle.prototype.getArea = function() {
// 	return Math.PI *Math.pow(this.radius,2);
// }
 // var fuc=new Circle(10);
 // console.log(fuc.getArea());

// var circle = {
// 	radius:10,

// 	getArea : function (){
// 		var self=this;
// 		console.log(this);

// 		var incradius =function (){
// 			self.radius=20;
// 		};
// 		incradius();
// 		return Math.PI * Math.pow(this.radius,2);
// 	}
// };
// console.log(circle.getArea());

// var array =new Array();
// array[0]="Achint";
// array[1]=2;
// array[2]= function (name) {
// 	console.log("Hello "+name);
// };
// array[3]={course :"Web Development"};

// console.log(array);
// array[2](array[0]);

// var names =["Legend ","Wait for it ...", "Dary",{name:"Barney Stinson"}];
// console.log(names);
// for (var i=0;i<names.length;i++) {
// 	console.log(names[i]);
// }

// var Obj={
// 	A : "Legend",
// 	B : "Wait for it",
// 	C : "Dary"
// };
// for (var prop in Obj) {
// 	console.log(prop +":" + Obj[prop]);
// }

(function (name) {
	console.log("Hello "+name );
})(" Mr. Achint");