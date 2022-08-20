<?php

namespace Drupal\views_global_current_uid\Plugin\views\field;

use Drupal\Core\Form\FormStateInterface;
use Drupal\Core\Session\AccountInterface;
use Drupal\views\Plugin\views\field\FieldPluginBase;
use Drupal\views\ResultRow;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Provides Views Global Current User ID field handler.
 *
 * @ViewsField("views_global_current_user_id")
 *
 */
class ViewsGlobalCurrentUserId extends FieldPluginBase {

  /**
   * The current user ID.
   *
   * @var \Drupal\Core\Session\AccountInterface
   */
  protected $currentUserId;

  /**
   * Constructs a new ViewsGlobalCurrentUid instance.
   *
   * @param array $configuration
   *   The plugin configuration, i.e. an array with configuration values keyed
   *   by configuration option name. The special key 'context' may be used to
   *   initialize the defined contexts by setting it to an array of context
   *   values keyed by context names.
   * @param string $plugin_id
   *   The plugin_id for the plugin instance.
   * @param mixed $plugin_definition
   *   The plugin implementation definition.
   * @param \Drupal\Core\Session\AccountInterface $current_user
   *   The current user.
   */
  public function __construct(array $configuration, $plugin_id, $plugin_definition, AccountInterface $current_user) {
    parent::__construct($configuration, $plugin_id, $plugin_definition);
    $this->currentUserId = $current_user->id();
  }

  /**
   * {@inheritdoc}
   */
  public static function create(ContainerInterface $container, array $configuration, $plugin_id, $plugin_definition) {
    return new static(
      $configuration,
      $plugin_id,
      $plugin_definition,
      $container->get('current_user')
    );
  }

  /**
   * {@inheritdoc}
   */
  public function query() {
		// Do nothing
  }

  /**
   * {@inheritdoc}
   */
  public function render(ResultRow $values) {
		return $this->currentUserId;
  }

}
