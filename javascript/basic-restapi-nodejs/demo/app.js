const server = require('./server');
const router = require('./router');
const handler = require('./handler');

var handle = {};
handle["/"] = handler.home;
handle["/home"] = handler.home;
handle["/review"] = handler.review;

server.startServer(router.route, handle);