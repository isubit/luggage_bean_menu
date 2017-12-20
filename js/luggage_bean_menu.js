(function ($) {

$(document).ready(function() {

  $(function() {
    var currentUrl = window.location.href;
    currentUrl = currentUrl.replace(/#/, "");
    $('nav.bean-menu a[href|="' + currentUrl + '"]').addClass('active');
  });

});

})(jQuery);