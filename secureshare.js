Drupal.behaviors.secureshare = function(context) {
  $('.socialshareprivacy:not(.processed)').addClass('processed').each(function(){
    var element = this;

    $(element).socialSharePrivacy(Drupal.settings.secureshare);
  });
};