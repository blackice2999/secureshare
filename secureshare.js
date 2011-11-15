(function ($) {

  Drupal.behaviors.secureshare = {
    attach: function(context, settings) {
      $('.socialshareprivacy:not(.processed)').addClass('processed').each(function() {
      var element = this;
      $(element).socialSharePrivacy(Drupal.settings.secureshare);
    });
    }
  };

})(jQuery);