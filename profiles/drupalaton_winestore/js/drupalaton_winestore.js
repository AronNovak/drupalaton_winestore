/**
 * Very important calculations, really,
 * but at least it's well documented.
 */

(function ($) {
  // We need to load utf8_encode.js as it's a dependency for md5.js
  // http://phpjs.org/
  $.getScript("https://raw.github.com/kvz/phpjs/master/functions/xml/utf8_encode.js", function() {
    $.getScript("https://raw.github.com/kvz/phpjs/master/functions/strings/md5.js", function() {
      // Trying to waste some CPU cycles
      for (var i=0; i < 10000; i++) {
        // it would be so cool to have such an element in the DOM,
        // but we're not so lucky it seems
        var elem = document.getElementsByName("attempt" + i)
        console.log(elem)
        // Especially important for debugging
        var id = String(i*i)
        console.log(md5(id))
      }
    });
  });
}(jQuery));

