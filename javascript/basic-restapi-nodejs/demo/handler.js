const queryString = require('querystring');

function home(res){
    console.log('executing home handler');
    var htmlFile = '<html>'+
    '<head>'+
    '<meta http-equiv="Content-Type" content="text/html;charset=UTF-8">'+
    '</head>'+
    '<body>'+
    '<form action="/review" method="post">'+
    '<textarea name="text" cols="60" rows="20"></textarea>'+
    '<input type="submit" value="submit text">'+
    '</form>'+
    '</body>'+
    '</html>';
    res.writeHead(200, {"Content-Type":"text/html"});
    res.write(htmlFile);
    res.end();
}

function review(res, reviewData){
    console.log('executing review handler');
    res.writeHead(200, {"Content-Type":"text/plain"});
    res.write("your review is "+ queryString.parse(reviewData).text);
    res.end();
}

exports.home = home;
exports.review = review;