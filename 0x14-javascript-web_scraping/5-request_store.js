#!/usr/bin/node


const request = require('request');
const fs = require('fs');
const url = process.argv[2];
const fileDir = process.argv[3];

request(url, function (error, response, body) {
  if (error) {
    console.log(error);
  } else {
    fs.writeFile(fileDir, body, 'utf-8');
  }
});
