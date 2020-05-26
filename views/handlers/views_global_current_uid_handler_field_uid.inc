<?php

/**
 * @file
 * Definition of views_global_current_uid_handler_field_uid.
 */

/**
 * A handler to provide a field that is completely custom by the administrator.
 *
 * @ingroup views_field_handlers
 */
class views_global_current_uid_handler_field_uid extends views_handler_field_custom {

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    unset($form['alter']);
    unset($form['alter']);
    unset($form['#pre_render']);
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    global $user;
    return $user->uid;
  }

}
