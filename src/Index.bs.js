// Generated by BUCKLESCRIPT VERSION 4.0.5, PLEASE EDIT WITH CARE
'use strict';

var ReactDOMRe = require("reason-react/src/ReactDOMRe.js");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var Text$ReactTemplate = require("./Text.bs.js");
var Component1$ReactTemplate = require("./Component1.bs.js");
var Component2$ReactTemplate = require("./Component2.bs.js");

ReactDOMRe.renderToElementWithId(ReasonReact.element(undefined, undefined, Component1$ReactTemplate.make("Hello!", /* array */[])), "index1");

ReactDOMRe.renderToElementWithId(ReasonReact.element(undefined, undefined, Component2$ReactTemplate.make("Hello!", /* array */[])), "index2");

var paragraph = "Hello this is absolutely a paragraph";

ReactDOMRe.renderToElementWithId(ReasonReact.element(undefined, undefined, Text$ReactTemplate.make(paragraph, /* array */[])), "index3");

exports.paragraph = paragraph;
/*  Not a pure module */
