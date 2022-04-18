document.addEventListener("click", function()
{
	fetch(document.baseURI + '/api')
		.then(response => response.json()
		.then(data => console.log(data));
});
