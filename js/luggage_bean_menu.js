(function ($) {

$(document).ready(function() {

  $(function() {
    var url = window.location.href;
    var slug = url.split('/').reverse()[0];
    slug = slug.replace(/#/, "");
    $('nav.bean-menu a[href|="' + slug + '"]').addClass('active');
  });

});

})(jQuery);