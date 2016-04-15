(function($) {

Drupal.behaviors.moduleFilterDynamicPosition = {
  attach: function(context) {
    var $window = $(window);
    //$("#edit-title").after("<div id='capslockdiv'><p style='display: none;'>"+Drupal.settings.caps_on.title_helpmsg+"</p></div>");
    $("#edit-title").after("<div id='capslockdiv'><p style='display: none;'>"+Drupal.settings.caps_on.title_helpmsg+"</p></div>");

    $('#edit-title').keypress(function(e) {
      var s = String.fromCharCode( e.which );
      if ( s.toUpperCase() === s && s.toLowerCase() !== s && !e.shiftKey ) {
        $('#capslockdiv p').show();
      }
      else {
        $('#capslockdiv p').hide();
      }
    });
  
  }
};

})(jQuery);

