const http = require("http");
const url = require("url");

function startServer(route, handle) {
  function onRequest(req, res) {
    var reviewData = "";
    var pathname = url.parse(req.url).pathname;
    console.log("request received for "+ pathname);
    req.setEncoding("utf8");

    req.addListener("data", function(chunk){
        reviewData += chunk;
    })

    req.addListener("end", function(){
        route(handle, pathname, res, reviewData);
    });
  }

  http.createServer(onRequest).listen(8080);
  console.log("server started on port 8080");
}

exports.startServer = startServer;
