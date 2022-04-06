var http = require('http');
var fs = require('fs');

var servio = {
    version : "1.5",
    create: function() {
        http.createServer(function (req, res) {
            res.writeHead(200, {'Content-Type': 'text/html'});
            res.write('Hello World!');
            res.end();
        }).listen(8080);
    }
};