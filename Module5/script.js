//console.log(document.getElementById("title"));
//console.log(document instanceof HTMLDocument);
// function sayHello() {
//       var name=document.getElementById("name").value;
//       var message = "<h2>Hello " + name +"!<h2>";
//       // console.log(message);

//       document
//         .getElementById("content")
//         // .textContent= message;
//         .innerHTML = message;
// }


// document.addEventListener("DOMContentLoaded",
//   function (event) {
 
//     function sayHello (event) {
//       this.textContent = "Said it!";
//       var name =
//        document.getElementById("name").value;
//        var message = "<h2>Hello " + name + "!</h2>";

//       document
//         .getElementById("content")
//         .innerHTML = message;

//       if (name === "student") {
//         var title =
//           document
//             .querySelector("#title")
//             .textContent;
//         title += " & Lovin' it!";
//         document
//             .querySelector("h1")
//             .textContent = title;
//       }
//     }


//     // Unobtrusive event binding
//     document.querySelector("button")
//       .addEventListener("click", sayHello);
//       				//OR
//     // document.querySelector("button")
// 	//   .onclick = sayHello;

// 	document.querySelector("body")
// 			.addEventListener("mousemove",
// 				function(event){
// 					if(event.shiftKey === true) {
// 						console.log("X:"+event.clientX);
// 						console.log("Y:"+ event.clientY);
// 					}
// 				});
//   }
// );


document.addEventListener("DOMContentLoaded",
	function(event) {

		document.querySelector("button")
		    .addEventListener("click", function() {
		    

				// $ajaxUtils.sendGetRequest("Data/name.txt",
				// function(request) {
				// 	var name =request.responseText;

	 		// 		document.querySelector("#content")
				// 	.innerHTML = "<h2>Hello " + name +"!";
				// });

				$ajaxUtils
					.sendGetRequest("Data/name.json",
						function(res) {
							var message = 
								res.firstName + " " + res.lastName
							if(res.likesChineseFood) {
								message += " likes Chinese Food";
							}
							else {
								message += " doesn't like Chinese Food";
							}
							message+= " and uses";
							message += res.numberOfDisplays;
							message += "displays for coding.";

							document.querySelector("#content")
								.innerHTML = "<h2>" + message +"</h2>";

						});  
			});



	}
);

